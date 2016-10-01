# Code written by Chiara De Falco, Stefano Mandelli, Anna Napoli and Eugenio Thieme.
# For bug segnalation please use https://github.com/Atmosferica/ustools or
# eugen@thieme.it

###################################################################################

#******************************************************************************
# Method for extracting vertical velocity slot
#******************************************************************************

setGeneric('get_zvel', function(object){    # To define an S4 method, I must create a generic first
  standardGeneric('get_zvel')               # standardGeneric is the S4 equivalent of UseMethod
})

setMethod('get_zvel', signature='turbulence', 
          function(object){
            z_vel <- object@w
            temperature <-object@t
            z_vel <- cbind(z_vel,temperature)
            return(z_vel)
          }
          , sealed=FALSE)


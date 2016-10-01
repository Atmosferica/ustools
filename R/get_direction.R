# Code written by Chiara De Falco, Stefano Mandelli, Anna Napoli and Eugenio Thieme.
# For bug segnalation please use https://github.com/Atmosferica/ustools or
# eugen@thieme.it

###################################################################################


#******************************************************************************
# Method for extracting wind direction slot
#******************************************************************************

setGeneric('get_direction', function(object){    # To define an S4 method, I must create a generic first
  standardGeneric('get_direction')               # standardGeneric is the S4 equivalent of UseMethod
})

setMethod('get_direction', signature='turbulence', 
          function(object){
            dir <- object@dir
            return(dir)
          }
          , sealed=FALSE)









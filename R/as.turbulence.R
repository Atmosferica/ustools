# Code written by Chiara De Falco, Stefano Mandelli, Anna Napoli and Eugenio Thieme.
# For bug segnalation please use https://github.com/Atmosferica/ustools or
# eugen@thieme.it

###################################################################################


# This is the definition of class turbulence
turbulence <- setClass('turbulence', slots=c(u='numeric', v='numeric', w='numeric', t='numeric', h_vel='numeric', dir='numeric'))



#******************************************************************************
# S3 method for casting an object into an object of class turbulence
#******************************************************************************

as.turbulence <- function(x, ...){
  UseMethod('as.turbulence')
}


as.turbulence.data.frame <- function(data){
  if(ncol(data)!=4) stop('Ncol is different from 4')
  if(ncol(data)==4){
    turb <- turbulence(u=data[,1], v=data[,2], w=data[,3], t=data[,4])
  }
  return(turb)
}


as.turbulence.matrix <- function(data){
  if(ncol(data)!=4) stop('Ncol is different from 4')
  if(ncol(data)==4){
    turb <- turbulence(u=data[,1], v=data[,2], w=data[,3], t=data[,4])
  }
  return(turb)
}

#******************************************************************************
# Default method: probably we can optimize the control on the length
#******************************************************************************

as.turbulence.default <- function(x, y, z, time){
  # If length of the elements passed differs, returns error (you must have the same number of data)
  if(length(u)!=length(v) | length(u)!=length(w) | length(u)!=length(t)
      | length(v)!=length(w) | length(v)!=length(t) | length(w)!=length(t)){
        stop('Error, lengths differ')
      }
  turb <- turbulence(u=x, v=y, w=z, t=time)
}



#******************************************************************************
# S3 method for casting an object of class turbulence into a data.frame
#******************************************************************************

as.data.frame.turbulence <- function(data){
  df <- data.frame(ncol=6, u=data@u, v=data@v, w=data@w, temp=data@t,
                   h_vel=data@h_vel, dir=data@dir)
  return(df)
}

